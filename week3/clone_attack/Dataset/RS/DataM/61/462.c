int CRgCAa [(1011 - 981)] = {(151 - 151), (111 - 110), (479 - 478)};

int atJYgcEI7mU (int d4hQ8fHVU7s) {
    int kA0t6qJQuyOz;
    if (2 >= d4hQ8fHVU7s)
        return 1;
    if (CRgCAa[d4hQ8fHVU7s] != 0)
        return CRgCAa[d4hQ8fHVU7s];
    kA0t6qJQuyOz = atJYgcEI7mU (d4hQ8fHVU7s - 1) + atJYgcEI7mU (d4hQ8fHVU7s - 2);
    CRgCAa[d4hQ8fHVU7s] = kA0t6qJQuyOz;
    return kA0t6qJQuyOz;
}

int main () {
    int ZipVc4hw, d4hQ8fHVU7s, W9bRUw5Ys;
    cin >> ZipVc4hw;
    {
        W9bRUw5Ys = 1;
        while (W9bRUw5Ys <= ZipVc4hw) {
            W9bRUw5Ys++;
            cin >> d4hQ8fHVU7s;
            cout << atJYgcEI7mU (d4hQ8fHVU7s) << endl;
        };
    }
    return 0;
}

