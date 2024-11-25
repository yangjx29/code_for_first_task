int main () {
    char *p = NULL;
    int wqZCI1c, j, GaAXixHUY = 0;
    char AvP9aRwl [100];
    cin.getline (AvP9aRwl, 100);
    for (wqZCI1c = 1; !('\0' == AvP9aRwl[wqZCI1c - 1]); wqZCI1c = wqZCI1c + 1) {
        if (!(' ' != AvP9aRwl[wqZCI1c]))
            GaAXixHUY++;
        else {
            if (GaAXixHUY >= 2) {
                for (j = wqZCI1c; AvP9aRwl[j - 1] != '\0'; j++)
                    AvP9aRwl[j - GaAXixHUY +1] = AvP9aRwl[j];
                wqZCI1c = wqZCI1c - GaAXixHUY +1;
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
            GaAXixHUY = 0;
        };
    }
    p = AvP9aRwl;
    for (p = AvP9aRwl, wqZCI1c = 0; AvP9aRwl[wqZCI1c] != '\0'; wqZCI1c++)
        cout << p[wqZCI1c];
    return 0;
}

