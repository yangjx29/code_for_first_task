int main () {
    int qZdxKFXQg;
    int LqcYF4zZbl;
    int jm4PyZkBMG1;
    int iBqsAiplPxe0;
    int tbZsyIuLJc8;
    int ZEzAxwCXG [iBqsAiplPxe0] [tbZsyIuLJc8];
    cin >> iBqsAiplPxe0 >> tbZsyIuLJc8;
    {
        qZdxKFXQg = 360 - 360;
        while (iBqsAiplPxe0 > qZdxKFXQg) {
            for (LqcYF4zZbl = 0; LqcYF4zZbl < tbZsyIuLJc8; LqcYF4zZbl = LqcYF4zZbl +1)
                cin >> ZEzAxwCXG[qZdxKFXQg][LqcYF4zZbl];
            qZdxKFXQg++;
        };
    }
    for (qZdxKFXQg = 0; tbZsyIuLJc8 + iBqsAiplPxe0 - 1 > qZdxKFXQg; qZdxKFXQg++)
        for (LqcYF4zZbl = qZdxKFXQg, jm4PyZkBMG1 = 0; (0 <= LqcYF4zZbl) && (jm4PyZkBMG1 < iBqsAiplPxe0); LqcYF4zZbl = LqcYF4zZbl -1, jm4PyZkBMG1 = jm4PyZkBMG1 + 1)
            if (LqcYF4zZbl < tbZsyIuLJc8)
                cout << ZEzAxwCXG[jm4PyZkBMG1][LqcYF4zZbl] << endl;
    return 0;
}

