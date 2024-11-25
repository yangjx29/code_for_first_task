char YGHRKwWd74o [1000] = {""}, LPBC6fuR, dg5HeVYQu;
int number, pairs = (547 - 547);

void  findpair (int girlid) {
    int TXDqJFSrhlx;
    if (!(1 == (number / 2 - pairs))) {
        findpair (TXDqJFSrhlx);
        pairs++;
        TXDqJFSrhlx = girlid - 1;
        for (; TXDqJFSrhlx > 0;) {
            if (YGHRKwWd74o[TXDqJFSrhlx] == dg5HeVYQu)
                break;
            TXDqJFSrhlx = TXDqJFSrhlx -1;
        };
    }
    {
        TXDqJFSrhlx = girlid - 1;
        while (TXDqJFSrhlx >= 0) {
            if (YGHRKwWd74o[TXDqJFSrhlx] == LPBC6fuR) {
                printf ("%d %d\n", TXDqJFSrhlx, girlid);
                YGHRKwWd74o[TXDqJFSrhlx] = 0;
                break;
            }
            TXDqJFSrhlx--;
        };
    };
}

int main () {
    int TXDqJFSrhlx;
    gets (YGHRKwWd74o);
    number = strlen (YGHRKwWd74o);
    LPBC6fuR = YGHRKwWd74o[0];
    {
        TXDqJFSrhlx = 0;
        while (TXDqJFSrhlx < number) {
            if (YGHRKwWd74o[TXDqJFSrhlx] != LPBC6fuR) {
                dg5HeVYQu = YGHRKwWd74o[TXDqJFSrhlx];
                break;
            }
            TXDqJFSrhlx++;
        };
    }
    findpair (number - 1);
    return 0;
}

