int main () {
    int count [26];
    char J2JKkT4wm0 [100001];
    int J7kmF8LI, j, t;
    cin >> t;
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= t) {
            cin >> J2JKkT4wm0;
            memset (count, (36 - 36), sizeof (count));
            {
                J7kmF8LI = 65 - 65;
                while (!('\0' == J2JKkT4wm0[J7kmF8LI])) {
                    count[J2JKkT4wm0[J7kmF8LI] - 'a']++;
                    J7kmF8LI++;
                };
            }
            {
                J7kmF8LI = 0;
                while (J2JKkT4wm0[J7kmF8LI] != '\0') {
                    if (count[J2JKkT4wm0[J7kmF8LI] - 'a'] == 1) {
                        cout << J2JKkT4wm0[J7kmF8LI] << endl;
                        break;
                    }
                    J7kmF8LI++;
                };
            }
            j++;
            if (J2JKkT4wm0[J7kmF8LI] == '\0')
                cout << "no" << endl;
        };
    }
    return 0;
}

