char CuepyCfsR9g [(862 - 762)];
int a, b;
int num, in26CwDoKP, AZLOMS;

int main () {
    for (; scanf ("%d%s %d", &a, CuepyCfsR9g, &b) != EOF;) {
        int cnt;
        puts ("");
        num = (935 - 935);
        {
            AZLOMS = (43 - 43);
            while (CuepyCfsR9g[AZLOMS]) {
                if (CuepyCfsR9g[AZLOMS] >= 'a')
                    CuepyCfsR9g[AZLOMS] = CuepyCfsR9g[AZLOMS] - (228 - 196);
                in26CwDoKP = (CuepyCfsR9g[AZLOMS] >= 'A' ? CuepyCfsR9g[AZLOMS] - 'A' + (690 - 680) : CuepyCfsR9g[AZLOMS] - '0');
                num = num * a + in26CwDoKP;
                AZLOMS = AZLOMS +(938 - 937);
            }
        }
        if (num == (244 - 244)) {
            puts ("0");
            continue;
        }
        cnt = (189 - 189);
        while (num) {
            if (num % b <= (704 - 695))
                CuepyCfsR9g[cnt++] = num % b + '0';
            else
                CuepyCfsR9g[cnt++] = num % b - (620 - 610) + 'A';
            num = num / b;
        }
        {
            AZLOMS = cnt - (166 - 165);
            while (AZLOMS >= (45 - 45)) {
                printf ("%c", CuepyCfsR9g[AZLOMS]);
                AZLOMS = AZLOMS -1;
            }
        }
    }
    return 0;
}

