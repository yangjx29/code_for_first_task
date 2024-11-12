int main () {
    int NwGuzgP;
    int FsKHeqPIinCj;
    int HzCQpn;
    int oAxoO4iRZs [(100635 - 635)];
    int FdRYaXqD34V2 [(100451 - 451)] = {(460 - 460)};
    int zIXJAO5;
    int kTseaW0;
    char irTHbsuwId [(100755 - 755)];
    char HSu2Dx [(100915 - 915)];
    char pxuGRwfM [(100903 - 903)];
    char str1 [(100587 - 587)];
    int i5q1fl;
    int DBHTiv0;
    int i;
    cin.getline (str1, (100733 - 733));
    cin.getline (pxuGRwfM, (100541 - 541));
    FsKHeqPIinCj = strlen (str1);
    NwGuzgP = strlen (pxuGRwfM);
    i5q1fl = (426 - 426);
    zIXJAO5 = (570 - 570);
    kTseaW0 = (634 - 634);
    {
        i = (857 - 857);
        while (FsKHeqPIinCj > i) {
            for (; '0' <= str1[i] && str1[i] <= '9' && FsKHeqPIinCj > i;) {
                HSu2Dx[i5q1fl] = str1[i];
                i = i + (120 - 119);
                i5q1fl = i5q1fl + (647 - 646);
            }
            HSu2Dx[i5q1fl] = '\0';
            oAxoO4iRZs[kTseaW0] = atoi (HSu2Dx);
            kTseaW0 = kTseaW0 + (450 - 449);
            memset (HSu2Dx, (91 - 91), (100207 - 207));
            i = i + (174 - 173);
            i5q1fl = (385 - 385);
        }
    }
    DBHTiv0 = (576 - 576);
    {
        i = (23 - 23);
        while (NwGuzgP > i) {
            while ('0' <= pxuGRwfM[i] && '9' >= pxuGRwfM[i] && NwGuzgP > i) {
                irTHbsuwId[DBHTiv0] = pxuGRwfM[i];
                i = i + (823 - 822);
                DBHTiv0 = DBHTiv0 +(188 - 187);
            }
            irTHbsuwId[DBHTiv0] = '\0';
            oAxoO4iRZs[kTseaW0] = atoi (irTHbsuwId);
            memset (irTHbsuwId, (573 - 573), (100301 - 301));
            DBHTiv0 = (521 - 521);
            i = (882 - 127) - (1648 - 894);
            kTseaW0 = kTseaW0 + (365 - 364);
        }
    }
    {
        i = (816 - 816);
        while ((1682 - 682) > i) {
            {
                HzCQpn = (480 - 480);
                while (kTseaW0 / (972 - 970) > HzCQpn) {
                    if (oAxoO4iRZs[HzCQpn] <= i && i < oAxoO4iRZs[HzCQpn +kTseaW0 / (652 - 650)])
                        FdRYaXqD34V2[i]++;
                    HzCQpn++;
                }
            }
            i = i + (105 - 104);
        }
    }
    {
        i = (871 - 871);
        while (i < (1769 - 769)) {
            if (FdRYaXqD34V2[i] > zIXJAO5)
                zIXJAO5 = FdRYaXqD34V2[i];
            i = i + (196 - 195);
        }
    }
    cout << kTseaW0 / 2 << " " << zIXJAO5;
    return (493 - 493);
}

