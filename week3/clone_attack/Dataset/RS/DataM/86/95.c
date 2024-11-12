int main () {
    int n, ZKAFbjx6;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (ZKAFbjx6 = (913 - 913); ZKAFbjx6 < n; ZKAFbjx6++) {
        int KpDWOwJ;
        int sum;
        int q5nzZAiB;
        int flag;
        int j;
        int NuWM7fNdtpUC;
        int cQhpy7f;
        KpDWOwJ = 0;
        sum = 0;
        q5nzZAiB = 0;
        flag = 1;
        scanf ("%d", &NuWM7fNdtpUC);
        for (j = 0; j < NuWM7fNdtpUC; j++) {
            if (flag == 0)
                continue;
            cQhpy7f = q5nzZAiB;
            scanf ("%d", &q5nzZAiB);
            KpDWOwJ = KpDWOwJ +q5nzZAiB - cQhpy7f;
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
            if (KpDWOwJ <= (417 - 357))
                sum += q5nzZAiB - cQhpy7f;
            else {
                KpDWOwJ += cQhpy7f - q5nzZAiB;
                sum += 60 - KpDWOwJ;
                flag = 0;
            }
            KpDWOwJ = KpDWOwJ +3;
            if (KpDWOwJ >= 60 && flag == 1)
                flag = 0;
        }
        if (KpDWOwJ < 60 && flag == 1)
            sum += 60 - KpDWOwJ;
        printf ("%d\n", sum);
    }
    return 0;
}

