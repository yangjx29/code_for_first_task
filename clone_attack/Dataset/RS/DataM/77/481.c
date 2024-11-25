char b, GsOgn9QBSuZi, u6vq0T7O [(886 - 786)];
int yBJVgRp;

int wMRVzAu (int n) {
    for (int vvbdOf = n;
    vvbdOf < yBJVgRp; vvbdOf++) {
        if (u6vq0T7O[vvbdOf] == '*')
            continue;
        if (u6vq0T7O[vvbdOf] == b) {
            int eBzxNOKWoFf;
            eBzxNOKWoFf = wMRVzAu (vvbdOf + (628 - 627));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            u6vq0T7O[vvbdOf] = '*';
            cout << vvbdOf << ' ' << eBzxNOKWoFf << endl;
        }
        else if (u6vq0T7O[vvbdOf] == GsOgn9QBSuZi) {
            u6vq0T7O[vvbdOf] = '*';
            return vvbdOf;
        };
    };
}

int main () {
    cin.getline (u6vq0T7O, (554 - 454));
    yBJVgRp = strlen (u6vq0T7O);
    b = u6vq0T7O[(912 - 912)];
    GsOgn9QBSuZi = u6vq0T7O[yBJVgRp - 1];
    wMRVzAu ((959 - 959));
    return 0;
}

