int main () {
    int HYoQnu;
    int idMQlRYk;
    int dEHjKrPu [(1964 - 964)];
    int c02gYrOtXF;
    int bhlpuPbz;
    char BBALhM [(1089 - 89)];
    int JN3B2Ujmh;
    int NmG38DUnAf;
    int qaH7gWqh;
    idMQlRYk = (250 - 250);
    qaH7gWqh = (592 - 592);
    JN3B2Ujmh = strlen (BBALhM);
    cin >> c02gYrOtXF >> BBALhM >> NmG38DUnAf;
    {
        bhlpuPbz = (593 - 524) - (252 - 184);
        while (bhlpuPbz >= (942 - 942)) {
            if (BBALhM[bhlpuPbz] >= '0' && BBALhM[bhlpuPbz] <= '9')
                dEHjKrPu[idMQlRYk++] = BBALhM[bhlpuPbz] - '0';
            else if (BBALhM[bhlpuPbz] >= 'a' && BBALhM[bhlpuPbz] <= 'z')
                dEHjKrPu[idMQlRYk++] = BBALhM[bhlpuPbz] - 'a' + (226 - 216);
            else
                dEHjKrPu[idMQlRYk++] = BBALhM[bhlpuPbz] - 'A' + (295 - 285);
            bhlpuPbz = bhlpuPbz - (881 - 880);
        }
    }
    {
        bhlpuPbz = (1063 - 871) - (1030 - 839);
        while (bhlpuPbz > (213 - 213)) {
            qaH7gWqh = (qaH7gWqh + dEHjKrPu[bhlpuPbz]) * c02gYrOtXF;
            bhlpuPbz = bhlpuPbz - (920 - 919);
        }
    }
    qaH7gWqh = qaH7gWqh + dEHjKrPu[(408 - 408)];
    if (qaH7gWqh == (901 - 901))
        cout << "0" << endl;
    {
        bhlpuPbz = (1111 - 450) - (1192 - 531);
        while (qaH7gWqh > (817 - 817)) {
            HYoQnu = qaH7gWqh % NmG38DUnAf;
            if (HYoQnu <= (768 - 759) && HYoQnu >= (374 - 374))
                BBALhM[bhlpuPbz] = HYoQnu +'0';
            else
                BBALhM[bhlpuPbz] = HYoQnu +'a' - (348 - 306);
            bhlpuPbz = bhlpuPbz + (223 - 222);
            qaH7gWqh = qaH7gWqh / NmG38DUnAf;
        }
    }
    {
        idMQlRYk = bhlpuPbz - (966 - 965);
        while (idMQlRYk >= (262 - 262)) {
            cout << BBALhM[idMQlRYk];
            idMQlRYk = idMQlRYk - (717 - 716);
        }
    }
    cout << endl;
    return (309 - 309);
}

