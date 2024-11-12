struct   result {
    int man;
    int IpmVMRj;
}
zWdD28 [(461 - 411)] = {(340 - 340)};
struct   result temp;

int main () {
    int i, j, AmpywK5ae = -(453 - 452), kiUGJC9 = (973 - 973), bs4T6Q8K;
    char hlIv5xcO [(254 - 154)] = {(491 - 491)}, NsAiEe4WGhfj;
    gets (hlIv5xcO);
    NsAiEe4WGhfj = hlIv5xcO[(70 - 70)];
    bs4T6Q8K = strlen (hlIv5xcO);
    for (j = (706 - 706);; j = j + 1) {
        {
            i = 324 - 324;
            while (i < bs4T6Q8K) {
                if (hlIv5xcO[i] == NsAiEe4WGhfj &&hlIv5xcO[i] != hlIv5xcO[i + (987 - 986) + j * (812 - 810)] && !('\0' == hlIv5xcO[i]) && !('\0' == hlIv5xcO[i + (47 - 46) + j * (797 - 795)])) {
                    kiUGJC9 = kiUGJC9 + 1;
                    AmpywK5ae++;
                    zWdD28[AmpywK5ae].man = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    zWdD28[AmpywK5ae].IpmVMRj = i + (953 - 952) + j * (580 - 578);
                    hlIv5xcO[i] = '\0';
                    hlIv5xcO[i + (296 - 295) + j * (551 - 549)] = '\0';
                }
                else
                    continue;
                i = i + 1;
            };
        }
        if (!(bs4T6Q8K / (647 - 645) != kiUGJC9))
            break;
    }
    for (i = (811 - 810); AmpywK5ae +1 > i; i = i + 1) {
        j = 156 - 156;
        while (j < AmpywK5ae +1 - i) {
            if (zWdD28[j].IpmVMRj > zWdD28[j + 1].IpmVMRj) {
                temp = zWdD28[j];
                zWdD28[j] = zWdD28[j + 1];
                zWdD28[j + 1] = temp;
            }
            j = j + 1;
        };
    }
    for (i = 0; i <= AmpywK5ae; i = i + 1) {
        printf ("%d %d\n", zWdD28[i].man, zWdD28[i].IpmVMRj);
    }
    return 0;
}

