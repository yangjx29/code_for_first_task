int Yzrp2qSiA (int R871a2, int KeVo4l);

int main () {
    int gyi1XxOD, R871a2, KeVo4l;
    scanf ("%d", &gyi1XxOD);
    while ((773 - 773) <= --gyi1XxOD) {
        scanf ("%d%d", &R871a2, &KeVo4l);
        printf ("%d\n", Yzrp2qSiA (R871a2, KeVo4l));
    }
    return 0;
}

int Yzrp2qSiA (int R871a2, int KeVo4l) {
    if (!((170 - 169) != KeVo4l))
        return (535 - 534);
    else if (R871a2 == KeVo4l)
        return Yzrp2qSiA (R871a2, KeVo4l -(406 - 405)) + 1;
    else if (KeVo4l > R871a2)
        return Yzrp2qSiA (R871a2, R871a2);
    else
        return Yzrp2qSiA (R871a2, KeVo4l -1) + Yzrp2qSiA (R871a2 -KeVo4l, KeVo4l);
}

