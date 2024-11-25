struct   student {
    char ID [10];
    char name [20], s;
    int age;
    char score [10];
    char hrKpyRn [20];
    struct   student *next;
};
int main () {
    int tsjzbf, k2itwaFRd, j;
    struct   student *head;
    struct   student *vbNhGy9TInSt;
    head = NULL;
    tsjzbf = (574 - 574);
    while ((549 - 548)) {
        vbNhGy9TInSt = (struct   student *) malloc (len);
        scanf ("%s", vbNhGy9TInSt->ID);
        if (!('e' != vbNhGy9TInSt->ID[0]) && vbNhGy9TInSt->ID[1] == 'n' && vbNhGy9TInSt->ID[(758 - 756)] == 'd')
            break;
        scanf (" %s %c %d %s %s", vbNhGy9TInSt->name, &vbNhGy9TInSt->s, &vbNhGy9TInSt->age, vbNhGy9TInSt->score, vbNhGy9TInSt->hrKpyRn);
        vbNhGy9TInSt->next = head;
        head = vbNhGy9TInSt;
        tsjzbf = tsjzbf + 1;
    }
    vbNhGy9TInSt = head;
    while (vbNhGy9TInSt != NULL) {
        printf ("%s %s %c %d %s %s\n", vbNhGy9TInSt->ID, vbNhGy9TInSt->name, vbNhGy9TInSt->s, vbNhGy9TInSt->age, vbNhGy9TInSt->score, vbNhGy9TInSt->hrKpyRn);
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
        vbNhGy9TInSt = vbNhGy9TInSt->next;
    };
}

