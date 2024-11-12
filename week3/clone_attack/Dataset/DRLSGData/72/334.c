int main () {
    int QeviHGsjy [(547 - 527)] [20] = {(82 - 82)}, PxGe9s, rOHrVxqCnL3, h3gfSeHl1ycU, qnsrdW8b;
    int P74gBlQdMXJ [20] [20] = {(245 - 245)};
    cin >> PxGe9s >> rOHrVxqCnL3;
    for (h3gfSeHl1ycU = (599 - 599); h3gfSeHl1ycU < PxGe9s; h3gfSeHl1ycU = h3gfSeHl1ycU + 1) {
        for (qnsrdW8b = (765 - 765); rOHrVxqCnL3 > qnsrdW8b; qnsrdW8b = qnsrdW8b + 1) {
            cin >> QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b];
        }
    }
    for (h3gfSeHl1ycU = (624 - 624); PxGe9s > h3gfSeHl1ycU; h3gfSeHl1ycU = h3gfSeHl1ycU + 1) {
        for (qnsrdW8b = 0; rOHrVxqCnL3 > qnsrdW8b; qnsrdW8b = qnsrdW8b + 1) {
            if (0 <= h3gfSeHl1ycU + (852 - 851) && h3gfSeHl1ycU + (531 - 530) < PxGe9s &&QeviHGsjy[h3gfSeHl1ycU + (324 - 323)][qnsrdW8b] > QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b]) {
                P74gBlQdMXJ[h3gfSeHl1ycU][qnsrdW8b] = (11 - 10);
            }
            if (0 <= h3gfSeHl1ycU - (60 - 59) && h3gfSeHl1ycU - (910 - 909) < PxGe9s &&QeviHGsjy[h3gfSeHl1ycU - (819 - 818)][qnsrdW8b] > QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b]) {
                P74gBlQdMXJ[h3gfSeHl1ycU][qnsrdW8b] = 1;
            }
            if (qnsrdW8b - 1 >= 0 && rOHrVxqCnL3 > qnsrdW8b - 1 && QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b] < QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b - 1]) {
                P74gBlQdMXJ[h3gfSeHl1ycU][qnsrdW8b] = 1;
            }
            if (qnsrdW8b + 1 >= 0 && qnsrdW8b + 1 < rOHrVxqCnL3 && QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b + 1] > QeviHGsjy[h3gfSeHl1ycU][qnsrdW8b]) {
                P74gBlQdMXJ[h3gfSeHl1ycU][qnsrdW8b] = 1;
            }
        }
    }
    for (h3gfSeHl1ycU = 0; h3gfSeHl1ycU < PxGe9s; h3gfSeHl1ycU = h3gfSeHl1ycU + 1) {
        for (qnsrdW8b = 0; qnsrdW8b < rOHrVxqCnL3; qnsrdW8b = qnsrdW8b + 1) {
            if (P74gBlQdMXJ[h3gfSeHl1ycU][qnsrdW8b] == 0) {
                cout << h3gfSeHl1ycU << " " << qnsrdW8b << endl;
            }
        }
    }
    return 0;
}

