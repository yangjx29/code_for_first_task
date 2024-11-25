int VZ7auWAY4F (int dZ37PFr1RS0, int MSwjlpP) {
    if (MSwjlpP < dZ37PFr1RS0)
        return dZ37PFr1RS0;
    else
        return MSwjlpP;
}

int nHtkr5 (int dZ37PFr1RS0, int MSwjlpP) {
    if (dZ37PFr1RS0 > MSwjlpP)
        return MSwjlpP;
    else
        return dZ37PFr1RS0;
}

int main () {
    int DVW9r7U [(1049 - 949)] [(449 - 349)];
    int MSwjlpP [100] [100];
    int fpEDXjw;
    int fA0xvNZcL;
    int sKxIOdN5gp;
    int k5nhALtzo4;
    int AYx2uHXC;
    int VN4vIQj75EV0;
    int IslH1dWUM9Si;
    int h5G2Osl;
    int xdmL4YC3a;
    int U8rwW5YMHK;
    int dZ37PFr1RS0 [100] [100];
    cin >> VN4vIQj75EV0 >> IslH1dWUM9Si;
    for (U8rwW5YMHK = (293 - 293); 100 > U8rwW5YMHK; U8rwW5YMHK = U8rwW5YMHK +1) {
        for (fA0xvNZcL = (664 - 664); 100 > fA0xvNZcL; fA0xvNZcL = fA0xvNZcL + 1) {
            dZ37PFr1RS0[U8rwW5YMHK][fA0xvNZcL] = (857 - 857);
            MSwjlpP[U8rwW5YMHK][fA0xvNZcL] = (70 - 70);
            DVW9r7U[U8rwW5YMHK][fA0xvNZcL] = (644 - 644);
        }
    }
    for (U8rwW5YMHK = (838 - 838); VN4vIQj75EV0 > U8rwW5YMHK; U8rwW5YMHK = U8rwW5YMHK +1) {
        for (fA0xvNZcL = (563 - 563); fA0xvNZcL < IslH1dWUM9Si; fA0xvNZcL = fA0xvNZcL + 1)
            cin >> dZ37PFr1RS0[U8rwW5YMHK][fA0xvNZcL];
    }
    cin >> h5G2Osl >> AYx2uHXC;
    for (U8rwW5YMHK = (630 - 630); h5G2Osl > U8rwW5YMHK; U8rwW5YMHK = U8rwW5YMHK +1) {
        for (fA0xvNZcL = (782 - 782); AYx2uHXC > fA0xvNZcL; fA0xvNZcL = fA0xvNZcL + 1)
            cin >> MSwjlpP[U8rwW5YMHK][fA0xvNZcL];
    }
    xdmL4YC3a = VZ7auWAY4F (IslH1dWUM9Si, AYx2uHXC);
    k5nhALtzo4 = VZ7auWAY4F (VN4vIQj75EV0, h5G2Osl);
    sKxIOdN5gp = nHtkr5 (k5nhALtzo4, xdmL4YC3a);
    for (U8rwW5YMHK = 0; k5nhALtzo4 > U8rwW5YMHK; U8rwW5YMHK++) {
        for (fA0xvNZcL = 0; xdmL4YC3a > fA0xvNZcL; fA0xvNZcL = fA0xvNZcL + 1) {
            for (fpEDXjw = 0; fpEDXjw < sKxIOdN5gp; fpEDXjw = fpEDXjw + 1)
                DVW9r7U[U8rwW5YMHK][fA0xvNZcL] = DVW9r7U[U8rwW5YMHK][fA0xvNZcL] + dZ37PFr1RS0[U8rwW5YMHK][fpEDXjw] * MSwjlpP[fpEDXjw][fA0xvNZcL];
        }
    }
    for (U8rwW5YMHK = 0; U8rwW5YMHK < VN4vIQj75EV0; U8rwW5YMHK++) {
        for (fA0xvNZcL = 0; fA0xvNZcL < AYx2uHXC -(954 - 953); fA0xvNZcL++) {
            cout << DVW9r7U[U8rwW5YMHK][fA0xvNZcL] << " ";
        }
        cout << DVW9r7U[U8rwW5YMHK][AYx2uHXC -1] << endl;
    }
    return 0;
}

