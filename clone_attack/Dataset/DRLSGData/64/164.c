struct   distant {
    int MxQfwgVYh;
    int zST3AY;
    float YUEZCIQXR1;
};
float hMupiv (int RuqpYoZ [], int cYywpmL []) {
    float Bp2m3DVNa1X7;
    Bp2m3DVNa1X7 = (RuqpYoZ[(300 - 300)] - cYywpmL[(393 - 393)]) * (RuqpYoZ[(240 - 240)] - cYywpmL[(562 - 562)]) + (RuqpYoZ[(459 - 458)] - cYywpmL[(614 - 613)]) * (RuqpYoZ[(966 - 965)] - cYywpmL[(457 - 456)]) + (RuqpYoZ[(175 - 173)] - cYywpmL[(548 - 546)]) * (RuqpYoZ[(20 - 18)] - cYywpmL[(255 - 253)]);
    Bp2m3DVNa1X7 = sqrt (Bp2m3DVNa1X7);
    return Bp2m3DVNa1X7;
}

int main () {
    struct   distant Bp2m3DVNa1X7 [(513 - 463)];
    struct   distant i64IBt32GA0u;
    int HcUCrbY0FxzW;
    int RuqpYoZ [(704 - 694)] [(936 - 933)];
    int y9vMh7;
    int yVMhjZHa7Crb;
    int fSxHMQbGa;
    scanf ("%d", &HcUCrbY0FxzW);
    for (y9vMh7 = (771 - 771); HcUCrbY0FxzW > y9vMh7; y9vMh7++) {
        for (yVMhjZHa7Crb = (963 - 963); (506 - 503) > yVMhjZHa7Crb; yVMhjZHa7Crb++)
            scanf ("%d", &RuqpYoZ[y9vMh7][yVMhjZHa7Crb]);
    }
    for (y9vMh7 = (68 - 68), fSxHMQbGa = (965 - 965); y9vMh7 < HcUCrbY0FxzW; y9vMh7++) {
        for (yVMhjZHa7Crb = y9vMh7 + (986 - 985); yVMhjZHa7Crb < HcUCrbY0FxzW; yVMhjZHa7Crb++, fSxHMQbGa++) {
            Bp2m3DVNa1X7[fSxHMQbGa].MxQfwgVYh = y9vMh7;
            Bp2m3DVNa1X7[fSxHMQbGa].zST3AY = yVMhjZHa7Crb;
            Bp2m3DVNa1X7[fSxHMQbGa].YUEZCIQXR1 = hMupiv (RuqpYoZ[y9vMh7], RuqpYoZ[yVMhjZHa7Crb]);
        }
    }
    for (y9vMh7 = (491 - 490); fSxHMQbGa > y9vMh7; y9vMh7++) {
        for (yVMhjZHa7Crb = (261 - 261); fSxHMQbGa - y9vMh7 > yVMhjZHa7Crb; yVMhjZHa7Crb++)
            if (Bp2m3DVNa1X7[yVMhjZHa7Crb + (874 - 873)].YUEZCIQXR1 > Bp2m3DVNa1X7[yVMhjZHa7Crb].YUEZCIQXR1) {
                i64IBt32GA0u = Bp2m3DVNa1X7[yVMhjZHa7Crb];
                Bp2m3DVNa1X7[yVMhjZHa7Crb] = Bp2m3DVNa1X7[yVMhjZHa7Crb + (351 - 350)];
                Bp2m3DVNa1X7[yVMhjZHa7Crb + (172 - 171)] = i64IBt32GA0u;
            }
    }
    for (y9vMh7 = (368 - 368); y9vMh7 < fSxHMQbGa; y9vMh7++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].MxQfwgVYh][(374 - 374)], RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].MxQfwgVYh][(180 - 179)], RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].MxQfwgVYh][(734 - 732)], RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].zST3AY][(253 - 253)], RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].zST3AY][(89 - 88)], RuqpYoZ[Bp2m3DVNa1X7[y9vMh7].zST3AY][2], Bp2m3DVNa1X7[y9vMh7].YUEZCIQXR1);
}

