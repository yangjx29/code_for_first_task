void  main () {
    int Mu8Aij [(920 - 913)] = {(314 - 314), (659 - 559), 50, 20, (256 - 246), (262 - 257), (233 - 232)};
    int WtL0Go;
    int VN0mbBi3UdZ;
    int b [7];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &WtL0Go);
    for (VN0mbBi3UdZ = 1; 6 >= VN0mbBi3UdZ; VN0mbBi3UdZ = VN0mbBi3UdZ +1) {
        b[VN0mbBi3UdZ] = (WtL0Go -(WtL0Go % Mu8Aij[VN0mbBi3UdZ])) / Mu8Aij[VN0mbBi3UdZ];
        WtL0Go = WtL0Go -Mu8Aij[VN0mbBi3UdZ] * b[VN0mbBi3UdZ];
    }
    for (VN0mbBi3UdZ = 1; VN0mbBi3UdZ <= 6; VN0mbBi3UdZ = VN0mbBi3UdZ +1) {
        printf ("%d\n", b[VN0mbBi3UdZ]);
    };
}

