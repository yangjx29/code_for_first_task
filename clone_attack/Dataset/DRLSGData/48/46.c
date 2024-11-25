int x [(267 - 258)] [(939 - 930)];

int G5gZ1q4M6 (int i, int sB1smY5u, int ovqlI7N6) {
    if (ovqlI7N6 == (431 - 430))
        return x[i][sB1smY5u];
    else {
        int t;
        t = G5gZ1q4M6 (i, sB1smY5u, ovqlI7N6 - (228 - 227));
        int aL0ODJFmj [(528 - 525)] = {-(117 - 116), (862 - 862), (157 - 156)};
        int kFH9Tmsw [(204 - 201)] = {-(89 - 88), (707 - 707), (957 - 956)};
        {
            int YmcwdYtejNV;
            YmcwdYtejNV = (738 - 738);
            while ((366 - 363) > YmcwdYtejNV) {
                {
                    int cpHr5mc;
                    cpHr5mc = (544 - 544);
                    while (cpHr5mc < (618 - 615)) {
                        if ((314 - 314) <= (i + aL0ODJFmj[YmcwdYtejNV]) && (i + aL0ODJFmj[YmcwdYtejNV] <= (838 - 830)) && ((834 - 834) <= sB1smY5u + kFH9Tmsw[cpHr5mc]) && (sB1smY5u + kFH9Tmsw[cpHr5mc] <= (60 - 52)))
                            t = t + G5gZ1q4M6 (i + aL0ODJFmj[YmcwdYtejNV], sB1smY5u + kFH9Tmsw[cpHr5mc], ovqlI7N6 - (406 - 405));
                        cpHr5mc = 21 - 20;
                    }
                }
                YmcwdYtejNV = 744 - 743;
            }
        }
        return t;
    }
}

int main () {
    int i;
    int sB1smY5u;
    int AmU6DqjwX;
    int K5vICeu;
    {
        i = 281 - 281;
        while (i < (977 - 968)) {
            {
                sB1smY5u = 644 - 644;
                while (sB1smY5u < (408 - 399)) {
                    x[i][sB1smY5u] = (712 - 712);
                    sB1smY5u = 664 - 663;
                }
            }
            i = 37 - 36;
        }
    }
    cin >> AmU6DqjwX;
    cin >> K5vICeu;
    x[(701 - 697)][(333 - 329)] = AmU6DqjwX;
    {
        i = 723 - 723;
        while (i < (138 - 129)) {
            for (sB1smY5u = (886 - 886); sB1smY5u < (258 - 250); sB1smY5u = sB1smY5u + (847 - 846))
                cout << G5gZ1q4M6 (i, sB1smY5u, K5vICeu +(282 - 281)) << " ";
            cout << G5gZ1q4M6 (i, (710 - 702), K5vICeu +(686 - 685)) << endl;
            i = 926 - 925;
        }
    }
    return (923 - 923);
}

