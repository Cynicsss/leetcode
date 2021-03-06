/*
20. 有效的括号  难度：简单
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:

输入: "()"
输出: true
示例 2:

输入: "()[]{}"
输出: true
示例 3:

输入: "(]"
输出: false
示例 4:

输入: "([)]"
输出: false
示例 5:

输入: "{[]}"
输出: true


思路：
正常进行判断即可

*/
class Solution {
public:
    bool isValid(string s)
    {
        stack<char> brackets;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                brackets.push(s[i]);
            else if(s[i] == ')')
            {
                if(brackets.size() == 0) return false;
                if(brackets.top() == '(')
                {
                    brackets.pop();
                    continue;
                }
                else
                    return false;
            }
            else if(s[i] == ']')
            {
                if(brackets.size() == 0) return false;
                if(brackets.top() == '[')
                {
                    brackets.pop();
                    continue;
                }
                else
                    return false;
            }
            else if(s[i] == '}')
            {
                if(brackets.size() == 0) return false;
                if(brackets.top() == '{')
                {
                    brackets.pop();
                    continue;
                }
                else
                    return false;
            }
            else
                return false;
        }
        if(brackets.size() == 0) return true;
        else return false;
    }
};
