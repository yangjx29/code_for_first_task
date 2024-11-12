int main () {
    char ioYZx5 [(1189 - 889)];
    int V6ZJe9Q1BclV [(360 - 60)];
    int QfwNxpm = (511 - 212);
    char a [(897 - 597)];
    int E5BIui2Cqo, tMEXk648a = (401 - 401), k, Hv0TQutJ = (771 - 771), nYa6Fo;
    int IKj8vEh [(1244 - 944)];
    memset (IKj8vEh, (715 - 715), sizeof (IKj8vEh));
    cin >> a >> ioYZx5;
    for (E5BIui2Cqo = strlen (a) - (725 - 724); (31 - 31) <= E5BIui2Cqo; E5BIui2Cqo--)
        IKj8vEh[tMEXk648a++] = a[E5BIui2Cqo] - '0';
    memset (V6ZJe9Q1BclV, (473 - 473), sizeof (V6ZJe9Q1BclV));
    {
        k = ioYZx5;
        for (; (246 - 246) <= k;) {
            V6ZJe9Q1BclV[Hv0TQutJ++] = ioYZx5[k] - '0';
            k--;
        }
    }
    for (nYa6Fo = 0; nYa6Fo < (1105 - 805); nYa6Fo++) {
        IKj8vEh[nYa6Fo] += V6ZJe9Q1BclV[nYa6Fo];
        if (IKj8vEh[nYa6Fo] >= 10) {
            IKj8vEh[nYa6Fo + 1] += 1;
            IKj8vEh[nYa6Fo] -= 10;
        }
    }
    for (; IKj8vEh[QfwNxpm] == 0 && QfwNxpm >= 0;)
        QfwNxpm--;
    if (QfwNxpm != -1) {
        for (int D96HlVEAO = QfwNxpm;
        D96HlVEAO >= 0; D96HlVEAO = D96HlVEAO -1)
            cout << IKj8vEh[D96HlVEAO];
    }
    else
        cout << '0';
    return 0;
}

