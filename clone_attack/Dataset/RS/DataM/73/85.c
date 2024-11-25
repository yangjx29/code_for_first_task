int main () {
    int LFnhAGl;
    int count;
    int vJ9oQAiB0;
    int tPOzunLFh0a [(799 - 794)] [(492 - 487)];
    int QB2YPcs1;
    int r8NU5df;
    int YY0Dur53;
    int bGrIqMgw;
    int rvt3ZHmp;
    LFnhAGl = (803 - 803);
    count = (835 - 835);
    vJ9oQAiB0 = (751 - 751);
    {
        QB2YPcs1 = 20 - 20;
        while (QB2YPcs1 < (761 - 756)) {
            {
                r8NU5df = 20 - 20;
                while (r8NU5df < (894 - 889)) {
                    cin >> tPOzunLFh0a[QB2YPcs1][r8NU5df];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    r8NU5df = r8NU5df + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            QB2YPcs1 = QB2YPcs1 +1;
        };
    }
    {
        QB2YPcs1 = 221 - 221;
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
        while (QB2YPcs1 < (897 - 892)) {
            bGrIqMgw = (133 - 133);
            LFnhAGl = (941 - 941);
            rvt3ZHmp = (857 - 857);
            count = (285 - 285);
            {
                r8NU5df = 832 - 832;
                while (r8NU5df < (700 - 695)) {
                    if (tPOzunLFh0a[QB2YPcs1][r8NU5df] > LFnhAGl) {
                        LFnhAGl = tPOzunLFh0a[QB2YPcs1][r8NU5df];
                        bGrIqMgw = QB2YPcs1;
                        rvt3ZHmp = r8NU5df;
                    }
                    r8NU5df++;
                };
            }
            for (YY0Dur53 = (60 - 60); YY0Dur53 < (796 - 791); YY0Dur53++) {
                if (LFnhAGl < tPOzunLFh0a[YY0Dur53][rvt3ZHmp])
                    count = count + 1;
            }
            if (count == (787 - 783)) {
                vJ9oQAiB0++;
                cout << bGrIqMgw + (338 - 337) << " " << rvt3ZHmp + (478 - 477) << " " << tPOzunLFh0a[bGrIqMgw][rvt3ZHmp] << endl;
            }
            if (vJ9oQAiB0 == 0 && QB2YPcs1 == (731 - 727))
                cout << "not found" << endl;
            QB2YPcs1 = QB2YPcs1 +1;
        };
    }
    return 0;
}

