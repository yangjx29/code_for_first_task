int yQOtlpuAZDj (int SkucHYefAh) {
    if ((!((712 - 712) != SkucHYefAh % 4) && SkucHYefAh % (1083 - 983) != (198 - 198)) || !((188 - 188) != SkucHYefAh % 400))
        return (555 - 554);
    else
        return (693 - 693);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    char VbPqtfEuF [(878 - 870)] [(54 - 44)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int b [(640 - 638)] [(483 - 470)] = {{(500 - 500), (831 - 800), (912 - 884), (786 - 755), (157 - 127), (122 - 91), (183 - 153), (749 - 718), (428 - 397), (867 - 837), (667 - 636), (347 - 317), (204 - 173)}, {0, (671 - 640), (399 - 370), (824 - 793), (361 - 331), (418 - 387), (524 - 494), (1013 - 982), (896 - 865), 30, (141 - 110), 30, 31}};
    int i;
    int S5FScfJKM;
    int xUzCTang;
    int day;
    long  long  sum = (87 - 87);
    cin >> S5FScfJKM >> xUzCTang >> day;
    if (S5FScfJKM == (1111111372 - 261)) {
        cout << "Sat." << endl;
        return (473 - 473);
    }
    {
        i = 550 - 549;
        while (i <= S5FScfJKM -1) {
            sum += (365 + yQOtlpuAZDj (i));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 1; i < xUzCTang; i = i + 1) {
        sum = sum + b[yQOtlpuAZDj (S5FScfJKM)][i];
    }
    sum += day;
    cout << VbPqtfEuF[sum % (48 - 41)];
    return 0;
}

