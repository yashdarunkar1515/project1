class Solution {
public:
    string decodeString(string s) {
        stack<int> numberstack;
        stack<string> stringstack;

        int number = 0;
        string current = "";

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                numberstack.push(number);
                stringstack.push(current);

                number = 0;
                current = "";
            }
            else if (s[i] == ']') {
                int repeat = numberstack.top();
                numberstack.pop();

                string temp = "";

                for (int j = 0; j < repeat; j++) {
                    temp = temp + current;
                }

                string previous = stringstack.top();
                stringstack.pop();

                current = previous + temp;
            }
            else {
                current = current + s[i];
            }
        }

        return current;
    }
};
