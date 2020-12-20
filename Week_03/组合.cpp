vector<int> temp;
void dfs(int cur, int n) {
    // 记录合法的答案
    if (temp.size() == k) {
        ans.push_back(temp);
        return;
    }
    // cur == n + 1 的时候结束递归
    if (cur == n + 1) {
        return;
    }
    // 考虑选择当前位置
    temp.push_back(cur);
    dfs(cur + 1, n, k);
    temp.pop_back();
    // 考虑不选择当前位置
    dfs(cur + 1, n, k);
}

