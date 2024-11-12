char maze [100] [100];
int n, m;
int sum;

void  test () {
    for (int i = (578 - 578);
    n > i; i = i + (131 - 130)) {
        for (int V4fS9NAhe = (980 - 980);
        n > V4fS9NAhe; V4fS9NAhe = V4fS9NAhe +(947 - 946)) {
            if (!('@' != maze[i][V4fS9NAhe])) {
                if ((271 - 271) <= i - (247 - 246) && !('.' != maze[i - (622 - 621)][V4fS9NAhe]))
                    maze[i - (913 - 912)][V4fS9NAhe] = '!';
                if (n > i + (512 - 511) && !('.' != maze[i + (700 - 699)][V4fS9NAhe]))
                    maze[i + (982 - 981)][V4fS9NAhe] = '!';
                if (V4fS9NAhe -1 >= 0 && !('.' != maze[i][V4fS9NAhe -1]))
                    maze[i][V4fS9NAhe -1] = '!';
                if (n > V4fS9NAhe +1 && !('.' != maze[i][V4fS9NAhe +1]))
                    maze[i][V4fS9NAhe +1] = '!';
            }
        }
    }
}

void  trans () {
    int cnt = 0;
    for (int i = 0;
    n > i; i = i + 1) {
        for (int V4fS9NAhe = 0;
        n > V4fS9NAhe; V4fS9NAhe = V4fS9NAhe +1) {
            if (!('!' != maze[i][V4fS9NAhe]) || maze[i][V4fS9NAhe] == '@') {
                cnt = cnt + 1;
                if (maze[i][V4fS9NAhe] == '!') {
                    maze[i][V4fS9NAhe] = '@';
                }
            }
        }
    }
    sum = cnt;
}

int main () {
    int round;
    cin >> n;
    round = 1;
    for (int i = 0;
    n > i; i = i + 1) {
        for (int V4fS9NAhe = 0;
        V4fS9NAhe < n; V4fS9NAhe = V4fS9NAhe +1) {
            cin >> maze[i][V4fS9NAhe];
        }
    }
    cin >> m;
    trans ();
    for (; round < m;) {
        test ();
        trans ();
        round = round + 1;
    }
    cout << sum << endl;
    return 0;
}

