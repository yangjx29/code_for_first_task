int main () {
    int WvVlgXZcowy;
    int DuDfQhc;
    int k6R1QZxod;
    int Bz0rRDIuEG;
    int A85NIuM [WvVlgXZcowy];
    scanf ("%d %d", &WvVlgXZcowy, &DuDfQhc);
    for (k6R1QZxod = 0; WvVlgXZcowy > k6R1QZxod; k6R1QZxod = k6R1QZxod + 1) {
        scanf ("%d ", &A85NIuM[k6R1QZxod]);
    }
    for (k6R1QZxod = 0; WvVlgXZcowy -1 > k6R1QZxod; k6R1QZxod++) {
        for (Bz0rRDIuEG = k6R1QZxod + 1; Bz0rRDIuEG < WvVlgXZcowy; Bz0rRDIuEG = Bz0rRDIuEG +1) {
            if (A85NIuM[k6R1QZxod] + A85NIuM[Bz0rRDIuEG] == DuDfQhc) {
                break;
            };
        }
        if (A85NIuM[k6R1QZxod] + A85NIuM[Bz0rRDIuEG] == DuDfQhc) {
            break;
        };
    }
    if (A85NIuM[k6R1QZxod] + A85NIuM[Bz0rRDIuEG] != DuDfQhc) {
    }
    return 0;
}

