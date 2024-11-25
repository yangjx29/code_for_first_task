int main (int XsQXTV0F7, char *I2cdRz9tWT []) {
    int SXSsJx3UteLO = (666 - 666);
    int count;
    int xue0DKhj7X;
    char ogmJRxQu4HF [(861 - 361)] [(263 - 257)], ZKQHOZk2f7 [500], temp [(607 - 601)];
    int k;
    int sPZNqOjxLwB;
    int cgnXjGcBe [500] = {(10 - 10)};
    int p;
    int l;
    int DHAlFw;
    scanf ("%d", &xue0DKhj7X);
    scanf ("%s", ZKQHOZk2f7);
    l = strlen (ZKQHOZk2f7);
    count = (678 - 678);
    for (sPZNqOjxLwB = (468 - 468); l - xue0DKhj7X >= sPZNqOjxLwB; sPZNqOjxLwB++) {
        int ppS9bRI = (994 - 994);
        {
            DHAlFw = (497 - 497);
            for (; DHAlFw <= xue0DKhj7X - (30 - 29);) {
                temp[DHAlFw] = ZKQHOZk2f7[sPZNqOjxLwB + DHAlFw];
                DHAlFw++;
            }
        }
        temp[DHAlFw] = '\0';
        for (p = 0; p < count; p++) {
            if (strcmp (ogmJRxQu4HF[p], temp) == 0) {
                cgnXjGcBe[p]++;
                ppS9bRI = (45 - 44);
                break;
            }
        }
        if (ppS9bRI == 0) {
            for (DHAlFw = 0; DHAlFw <= xue0DKhj7X; DHAlFw++) {
                ogmJRxQu4HF[count][DHAlFw] = temp[DHAlFw];
                cgnXjGcBe[count] = (490 - 489);
            }
            count++;
        }
    }
    for (sPZNqOjxLwB = 0; sPZNqOjxLwB <= count; sPZNqOjxLwB++) {
        if (cgnXjGcBe[sPZNqOjxLwB] > SXSsJx3UteLO) {
            SXSsJx3UteLO = cgnXjGcBe[sPZNqOjxLwB];
        }
    }
    if (SXSsJx3UteLO == 1) {
        return 0;
    }
    printf ("%d\n", SXSsJx3UteLO);
    {
        sPZNqOjxLwB = 0;
        while (sPZNqOjxLwB <= count) {
            if (cgnXjGcBe[sPZNqOjxLwB] == SXSsJx3UteLO) {
                printf ("%s\n", ogmJRxQu4HF[sPZNqOjxLwB]);
            }
            sPZNqOjxLwB++;
        }
    }
    return 0;
}

