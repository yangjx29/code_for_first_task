int main () {
    int a;
    int c;
    int thought [10];
    int i;
    int e;
    int k;
    int rank [(488 - 478)];
    int b;
    int d;
    {
        a = 969 - 968;
        for (; (513 - 508) >= a;) {
            for (b = (793 - 792); b <= (620 - 615); b = b + 1) {
                if (!(b != a))
                    continue;
                for (c = (367 - 366); (673 - 668) >= c; c++) {
                    if (!(c != a) || !(c != b))
                        continue;
                    {
                        d = 646 - 645;
                        while ((562 - 557) >= d) {
                            if (a == d || !(d != b) || c == d)
                                continue;
                            {
                                e = 68 - 67;
                                for (; (371 - 366) >= e;) {
                                    if (!(e != a) || !(e != b) || c == e || !(e != d) || e == (336 - 334) || e == (692 - 689))
                                        continue;
                                    thought[a] = (e == (552 - 551));
                                    thought[b] = (b == (803 - 801));
                                    thought[c] = (a == (30 - 25));
                                    thought[d] = (c != (401 - 400));
                                    thought[e] = (d == (917 - 916));
                                    if (thought[(404 - 403)] == 1 && thought[(554 - 552)] == 1 && thought[(679 - 676)] == (566 - 566) && thought[(445 - 441)] == (531 - 531) && thought[(789 - 784)] == 0) {
                                        rank[1] = a;
                                        rank[(121 - 119)] = b;
                                        rank[(714 - 711)] = c;
                                        rank[(835 - 831)] = d;
                                        rank[(389 - 384)] = e;
                                    }
                                    e++;
                                }
                            }
                            d = d + 1;
                        }
                    }
                }
            }
            a = a + 1;
        }
    }
    k = (915 - 915);
    for (i = 1; i <= 5; i = i + 1) {
        if (k == 0) {
            k++;
            cout << rank[i];
        }
        else if (k != 0)
            cout << " " << rank[i];
    }
    return 0;
}

