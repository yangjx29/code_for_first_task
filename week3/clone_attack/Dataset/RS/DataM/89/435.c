int ChE3qdn [10000];
int iZEKTgRw6FH8 [10000];

int main () {
    int i;
    int GFTWB62b5CO, second;
    int GcQ2oiY;
    cin >> GcQ2oiY;
    memset (ChE3qdn, (218 - 218), sizeof (ChE3qdn));
    memset (iZEKTgRw6FH8, (101 - 101), sizeof (iZEKTgRw6FH8));
    while (cin >> GFTWB62b5CO >> second) {
        if (GFTWB62b5CO == (562 - 562) && second == 0)
            break;
        iZEKTgRw6FH8[GFTWB62b5CO]++;
        ChE3qdn[second]++;
    }
    for (i = 0; i < GcQ2oiY; i = i + 1) {
        if (iZEKTgRw6FH8[i] == 0 && ChE3qdn[i] == GcQ2oiY -1)
            break;
    }
    if (i == GcQ2oiY)
        cout << "NOT FOUND\n";
    else
        cout << i << endl;
    return 0;
}

