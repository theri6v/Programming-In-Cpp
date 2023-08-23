class Solution{
  public:

    /*You are required to complete below function */
   string multiplyStrings(string s1, string s2) {
    vector<int> num1, num2;
    int sign = 1;

    if (s1[0] == '-') {
        sign *= -1;
        s1 = s1.substr(1);
    }
    if (s2[0] == '-') {
        sign *= -1;
        s2 = s2.substr(1);
    }

    for (char ch : s1) {
        num1.push_back(ch - '0');
    }
    for (char ch : s2) {
        num2.push_back(ch - '0');
    }

    int len1 = num1.size();
    int len2 = num2.size();
    int result_len = len1 + len2;

    vector<int> result(result_len, 0);

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int temp = num1[i] * num2[j] + result[i + j + 1] + carry;
            carry = temp / 10;
            result[i + j + 1] = temp % 10;
        }
        result[i] += carry;
    }

    string result_str;
    for (int num : result) {
        result_str += to_string(num);
    }

    size_t nonZeroIndex = result_str.find_first_not_of('0');
    if (nonZeroIndex == string::npos) {
        return "0";
    }

    if (sign == -1) {
        return "-" + result_str.substr(nonZeroIndex);
    }

    return result_str.substr(nonZeroIndex);
}


};
