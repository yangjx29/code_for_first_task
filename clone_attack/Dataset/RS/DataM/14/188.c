struct   student {
    int TuTcX5;
    int mET6a0VA;
};
int main () {
    int ZrKSjdx;
    struct   student a [ZrKSjdx];
    int ofBKWF87Z9x, j, YTDXJE2vS7;
    cin >> ZrKSjdx;
    {
        ofBKWF87Z9x = 0;
        while (ofBKWF87Z9x < ZrKSjdx) {
            int E0M8fTZ7peub, Z9qj31oadT;
            cin >> a[ofBKWF87Z9x].TuTcX5 >> E0M8fTZ7peub >> Z9qj31oadT;
            a[ofBKWF87Z9x].mET6a0VA = E0M8fTZ7peub +Z9qj31oadT;
            ofBKWF87Z9x++;
        };
    }
    {
        ofBKWF87Z9x = 0;
        while (3 > ofBKWF87Z9x) {
            {
                j = ofBKWF87Z9x;
                while (j < ZrKSjdx) {
                    if (a[j].mET6a0VA > a[ofBKWF87Z9x].mET6a0VA) {
                        YTDXJE2vS7 = a[ofBKWF87Z9x].mET6a0VA;
                        a[ofBKWF87Z9x].mET6a0VA = a[j].mET6a0VA;
                        a[j].mET6a0VA = YTDXJE2vS7;
                        YTDXJE2vS7 = a[ofBKWF87Z9x].TuTcX5;
                        a[ofBKWF87Z9x].TuTcX5 = a[j].TuTcX5;
                        a[j].TuTcX5 = YTDXJE2vS7;
                    }
                    j++;
                };
            }
            ofBKWF87Z9x++;
        };
    }
    {
        ofBKWF87Z9x = 0;
        while (ofBKWF87Z9x < 3) {
            cout << a[ofBKWF87Z9x].TuTcX5 << ' ' << a[ofBKWF87Z9x].mET6a0VA << endl;
            ofBKWF87Z9x++;
        };
    }
    return 0;
}

