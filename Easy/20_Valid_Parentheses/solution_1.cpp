class Solution {
public:
    bool isValid(string s) {
    stack<char> stck;
    if(s.length() == 1) return false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i]=='[' )
        {
            stck.push(s[i]);

        }
        else
        {   if(stck.empty() ) return false;
            char  check = stck.top();
            if (check == '(' && s[i] == ')') stck.pop();
            else if(check == '{' && s[i] == '}') stck.pop();
            else if(check == '[' && s[i] == ']') stck.pop();
            else return false;
        }
    }   
    if(!stck.empty()) return false;
    else return true;
}
};
