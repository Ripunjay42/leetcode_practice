#include <iostream>
#include <vector>
using namespace std;

vector<string> generate_binary_strings(int n) {
  if (n == 0) {
    return {""};
  }
  if (n == 1) {
    return {"0", "1"};
  }
  vector<string> result;
  for (string s : generate_binary_strings(n - 1)) {
    result.push_back(s + "0");
    if (s[s.length() - 1] != '1') {
      result.push_back(s + "1");
    }
  }
  return result;
}

int main() {
  vector<string> binary_strings = generate_binary_strings(4);
  for (string s : binary_strings) {
    cout << s << " ";
  }
  return 0;
}