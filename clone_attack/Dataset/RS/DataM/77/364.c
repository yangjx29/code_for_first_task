int main () {
    int top = 0, ki8L92u, j, k, m, n, yxgiKI7mrw [100];
    char MalF7ZxQG [400];
    char JdfjFkiysGx;
    gets (MalF7ZxQG);
    JdfjFkiysGx = MalF7ZxQG[0];
    for (ki8L92u = 0; strlen (MalF7ZxQG) > ki8L92u; ki8L92u++) {
        if (MalF7ZxQG[ki8L92u] == JdfjFkiysGx) {
            top++;
            yxgiKI7mrw[top] = ki8L92u;
        }
        else {
            printf ("%d %d\n", yxgiKI7mrw[top], ki8L92u);
            top--;
        };
    }
    return 0;
}

