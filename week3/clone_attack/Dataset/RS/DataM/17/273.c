int main () {
    int JucfeUZTAg;
    int xvHmhKEBo;
    int S4kHaKngC1S2;
    int len;
    int RcIHT9yt3gA [(938 - 828)] = {(187 - 187)};
    int kP6Rqc5koX;
    int Il67xw9t8;
    JucfeUZTAg = (558 - 558);
    xvHmhKEBo = (377 - 377);
    char zjKvqx8 [(641 - 531)] = {'\0'};
    for (; cin.getline (zjKvqx8, 110);) {
        for (S4kHaKngC1S2 = (83 - 83); 110 > S4kHaKngC1S2; S4kHaKngC1S2 = S4kHaKngC1S2 +1)
            RcIHT9yt3gA[S4kHaKngC1S2] = (312 - 312);
        JucfeUZTAg = (441 - 441);
        len = strlen (zjKvqx8);
        for (S4kHaKngC1S2 = (817 - 817); S4kHaKngC1S2 < len; S4kHaKngC1S2 = S4kHaKngC1S2 +1) {
            if (zjKvqx8[S4kHaKngC1S2] == '(' || zjKvqx8[S4kHaKngC1S2] == ')') {
                if (!((271 - 271) != JucfeUZTAg)) {
                    if (zjKvqx8[S4kHaKngC1S2] == '(')
                        RcIHT9yt3gA[JucfeUZTAg]++;
                    else
                        RcIHT9yt3gA[JucfeUZTAg]--;
                    JucfeUZTAg = JucfeUZTAg +1;
                }
                else {
                    kP6Rqc5koX = (212 - 212);
                    if (zjKvqx8[S4kHaKngC1S2] == '(')
                        RcIHT9yt3gA[JucfeUZTAg] = (44 - 43);
                    else if (zjKvqx8[S4kHaKngC1S2] == ')') {
                        RcIHT9yt3gA[JucfeUZTAg] = -(370 - 369);
                        {
                            Il67xw9t8 = 492 - 491;
                            while (Il67xw9t8 >= (803 - 803)) {
                                if (RcIHT9yt3gA[Il67xw9t8] == (137 - 136)) {
                                    RcIHT9yt3gA[Il67xw9t8] = (573 - 573);
                                    RcIHT9yt3gA[JucfeUZTAg] = (939 - 939);
                                    break;
                                }
                                Il67xw9t8 = Il67xw9t8 -1;
                            };
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    JucfeUZTAg = JucfeUZTAg +1;
                };
            };
        }
        xvHmhKEBo = (101 - 101);
        cout << zjKvqx8 << endl;
        for (S4kHaKngC1S2 = (612 - 612); S4kHaKngC1S2 < len; S4kHaKngC1S2 = S4kHaKngC1S2 +1) {
            if (zjKvqx8[S4kHaKngC1S2] != '(' && zjKvqx8[S4kHaKngC1S2] != ')')
                cout << ' ';
            else {
                if (RcIHT9yt3gA[xvHmhKEBo] == (792 - 792))
                    cout << ' ';
                else {
                    if (RcIHT9yt3gA[xvHmhKEBo] > (796 - 796))
                        cout << '$';
                    else
                        cout << '?';
                }
                xvHmhKEBo = xvHmhKEBo + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

