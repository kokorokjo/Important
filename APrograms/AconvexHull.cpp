#include <bits/stdc++.h>
// #define ll long long 
using namespace std;
// typedef long long ll;
typedef long long ll;
 
struct Point {
 
    ll x, y;
 
    bool operator<(Point p)
    {
        return x < p.x || (x == p.x && y < p.y);
    }
};
 
ll cross_product(Point A, Point B, Point Q)
{
    cout<<A.x<<" "<<A.y<<" "<<B.x<<" "<<B.y<<" "<<Q.x<<" "<<Q.y<<endl;
    cout<<(B.x - A.x) * (Q.y - A.y)<<" "<<(B.y - A.y) * (Q.x - A.x)<<endl;
    return (B.x - A.x) * (Q.y - A.y)
           - (B.y - A.y) * (Q.x - A.x);
    
}
 

vector<Point> convex_hull(vector<Point> A)
{
    int n = A.size(), k = 0;
 
    if (n <= 3)
        return A;
 
    vector<Point> ans(2 * n);
 
    sort(A.begin(), A.end());
 
    for (int i = 0; i < n; ++i) {
        while (k >= 2 && cross_product(ans[k - 2], ans[k - 1], A[i]) <= 0) k--;
        
        ans[k++] = A[i];
    }
 
    int t = k + 1;
    for (int i = n - 1; i > 0; --i) {
 
        while (k >= t && cross_product(ans[k - 2], ans[k - 1], A[i - 1]) <= 0) k--;
        ans[k++] = A[i - 1];
    }
 
    ans.resize(k - 1);
 
    return ans;
}
 

int main()
{
    vector<Point> points;
 
    points.push_back({ 0, 3 });
    points.push_back({ 2, 2 });
    points.push_back({ 1, 1 });
    points.push_back({ 2, 1 });
    points.push_back({ 3, 0 });
    points.push_back({ 0, 0 });
    points.push_back({ 3, 3 });
    points.push_back({ 1, 4 });
 
    vector<Point> ans = convex_hull(points);
 
    for (int i = 0; i < ans.size(); i++)
        cout << "(" << ans[i].x << ", " << ans[i].y << ")"
             << endl;
 
    return 0;
}