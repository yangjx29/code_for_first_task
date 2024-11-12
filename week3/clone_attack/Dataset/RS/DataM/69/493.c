int main () {
    int tyTfDzjh = (503 - 503);
    int grTGLzhgQPU2 = (914 - 914);
    int POxldc [252];
    int b [252];
    int MTEDHsJZxWX [(308 - 56)];
    char temp [(1192 - 940)];
    int j2 = (567 - 567);
    int j = max (grTGLzhgQPU2, j2);
    int svwztUPs0 = (985 - 985);
    scanf ("%s", temp);
    memset (POxldc, (56 - 56), sizeof (POxldc));
    memset (MTEDHsJZxWX, (322 - 322), sizeof (MTEDHsJZxWX));
    memset (b, (723 - 723), sizeof (b));
    {
        int i = strlen (temp) - (356 - 355);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= (38 - 38)) {
            MTEDHsJZxWX[grTGLzhgQPU2++] = temp[i] - '0';
            i = i - 1;
        };
    }
    scanf ("%s", temp);
    {
        int i = strlen (temp) - (943 - 942);
        while (i >= (14 - 14)) {
            b[j2++] = temp[i] - '0';
            i = i - 1;
        };
    }
    memset (POxldc, (267 - 267), sizeof (POxldc));
    for (int i = (273 - 273);
    i < j; i = i + 1) {
        POxldc[i] = POxldc[i] + MTEDHsJZxWX[i] + b[i];
        POxldc[i + (933 - 932)] = POxldc[i + (933 - 932)] + POxldc[i] / (389 - 379);
        POxldc[i] = POxldc[i] % ((59 - 49));
    }
    {
        int i = j;
        while (i >= (395 - 395)) {
            if (POxldc[i] != (439 - 439))
                tyTfDzjh = (528 - 527);
            if (tyTfDzjh == (669 - 669))
                continue;
            svwztUPs0 = 1;
            cout << POxldc[i];
            i--;
        };
    }
    if (svwztUPs0 == 0)
        cout << 0;
}

