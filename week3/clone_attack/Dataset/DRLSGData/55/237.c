main () {
    int tEOHZLMtrUk;
    char khSUYCNQO [(581 - 571)];
    char KTjfyW83Hz7G [(769 - 759)];
    long  ArVmM6EqK1Z;
    int FSI4iCo9;
    int aYlnf2;
    int kfy8DFvx3;
    int MMXeCV2N;
    int benGQWDcf;
    {
        {
            if (0) {
                return 0;
            }
        }
        if ((97 - 97)) {
            return (702 - 702);
        }
    }
    scanf ("%d %s %d", &kfy8DFvx3, KTjfyW83Hz7G, &MMXeCV2N);
    benGQWDcf = strlen (KTjfyW83Hz7G);
    ArVmM6EqK1Z = (510 - 510);
    for (tEOHZLMtrUk = (222 - 222); tEOHZLMtrUk < benGQWDcf; tEOHZLMtrUk = tEOHZLMtrUk + 1) {
        if (KTjfyW83Hz7G[tEOHZLMtrUk] >= 'a' && KTjfyW83Hz7G[tEOHZLMtrUk] <= 'z')
            ArVmM6EqK1Z = ArVmM6EqK1Z *kfy8DFvx3 + KTjfyW83Hz7G[tEOHZLMtrUk] - 'a' + 10;
        if (KTjfyW83Hz7G[tEOHZLMtrUk] >= 'A' && KTjfyW83Hz7G[tEOHZLMtrUk] <= 'Z')
            ArVmM6EqK1Z = ArVmM6EqK1Z *kfy8DFvx3 + KTjfyW83Hz7G[tEOHZLMtrUk] - 'A' + 10;
        if (KTjfyW83Hz7G[tEOHZLMtrUk] >= '0' && KTjfyW83Hz7G[tEOHZLMtrUk] <= '9')
            ArVmM6EqK1Z = ArVmM6EqK1Z *kfy8DFvx3 + KTjfyW83Hz7G[tEOHZLMtrUk] - '0';
    }
    for (FSI4iCo9 = (487 - 487), tEOHZLMtrUk = (830 - 830);; tEOHZLMtrUk++) {
        if (ArVmM6EqK1Z % MMXeCV2N >= 10)
            khSUYCNQO[FSI4iCo9] = ArVmM6EqK1Z % MMXeCV2N -10 + 'A';
        else
            khSUYCNQO[FSI4iCo9] = ArVmM6EqK1Z % MMXeCV2N +'0';
        FSI4iCo9++;
        ArVmM6EqK1Z = ArVmM6EqK1Z / MMXeCV2N;
        if (ArVmM6EqK1Z == 0)
            break;
    }
    for (tEOHZLMtrUk = FSI4iCo9 -1; tEOHZLMtrUk >= 0; tEOHZLMtrUk--)
        printf ("%c", khSUYCNQO[tEOHZLMtrUk]);
}

