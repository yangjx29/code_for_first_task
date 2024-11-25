int qvHnOt0PA2L (int, int, int);

int main () {
    int YHz8xV;
    int kYCj0AzQO;
    scanf ("%d", &YHz8xV);
    for (kYCj0AzQO = 1; kYCj0AzQO < 13; kYCj0AzQO = kYCj0AzQO + 1) {
        if (qvHnOt0PA2L (kYCj0AzQO, 13, YHz8xV))
            printf ("%d\n", kYCj0AzQO);
    }
    return (680 - 680);
}

int qvHnOt0PA2L (int kYCj0AzQO, int t2s4hr6DuxV, int JBrLGjwE) {
    int M7cokPyRbH, xla8nvxQ = 0;
    for (M7cokPyRbH = 1; M7cokPyRbH < kYCj0AzQO; M7cokPyRbH++) {
        if (M7cokPyRbH == 1)
            xla8nvxQ = xla8nvxQ + 31;
        if (M7cokPyRbH == 2)
            xla8nvxQ = xla8nvxQ + 28;
        if (M7cokPyRbH == 3)
            xla8nvxQ = xla8nvxQ + 31;
        if (M7cokPyRbH == 5)
            xla8nvxQ = xla8nvxQ + 31;
        if (M7cokPyRbH == 7)
            xla8nvxQ += 31;
        if (M7cokPyRbH == 8)
            xla8nvxQ += 31;
        if (M7cokPyRbH == 10)
            xla8nvxQ += 31;
        if (M7cokPyRbH == 4)
            xla8nvxQ = xla8nvxQ + (316 - 286);
        if (M7cokPyRbH == 6)
            xla8nvxQ = xla8nvxQ + 30;
        if (M7cokPyRbH == 9)
            xla8nvxQ = xla8nvxQ + 30;
        if (M7cokPyRbH == 11)
            xla8nvxQ = xla8nvxQ + 30;
    }
    xla8nvxQ += t2s4hr6DuxV;
    M7cokPyRbH = (xla8nvxQ + JBrLGjwE -1) % 7;
    if (M7cokPyRbH == 5)
        return 1;
    else
        return 0;
}

