int iW7oLxEevmz [20] = {(565 - 564), (735 - 734)};
int n, DgiDQ8tuncx, k, j;

int main () {
    cin >> n;
    {
        DgiDQ8tuncx = 374 - 373;
        while (DgiDQ8tuncx <= n) {
            DgiDQ8tuncx = DgiDQ8tuncx +1;
            cin >> k;
            if (k > 2) {
                j = 2;
                while (j <= k - 1) {
                    iW7oLxEevmz[j] = iW7oLxEevmz[j - 1] + iW7oLxEevmz[j - 2];
                    j = j + 1;
                };
            }
            cout << iW7oLxEevmz[k - 1] << endl;
        };
    }
    return (558 - 558);
}

