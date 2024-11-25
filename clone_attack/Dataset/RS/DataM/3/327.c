void  main () {
    int a [1001];
    int wLImsFbya7K3;
    int V6RYgh;
    int i;
    int j;
    int flag;
    flag = (994 - 994);
    scanf ("%d%d", &wLImsFbya7K3, &V6RYgh);
    for (i = 0; i < wLImsFbya7K3; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < wLImsFbya7K3 && flag == 0; i++)
        for (j = 0; j < wLImsFbya7K3 && flag == 0; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (j > i && a[i] + a[j] == V6RYgh) {
                flag = 1;
                printf ("yes\n");
            };
        }
    if (flag == 0)
        printf ("no");
}

