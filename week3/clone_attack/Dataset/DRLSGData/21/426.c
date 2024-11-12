int main () {
    int UTrMGZnV;
    int OWuUo5VbnfOa;
    float k1gqvu [(898 - 598)] = {(553 - 553)};
    float sUvOfVhD85KS;
    int yTbV2iy;
    int ouARB0WbQL [(440 - 140)] = {(142 - 142)};
    int ZlagSLbj;
    int WsE1Pv;
    float Vuq13U;
    WsE1Pv = (358 - 358);
    scanf ("%d", &ZlagSLbj);
    for (yTbV2iy = (692 - 692); ZlagSLbj > yTbV2iy; yTbV2iy = yTbV2iy + (143 - 142)) {
        scanf ("%d", &ouARB0WbQL[yTbV2iy]);
        WsE1Pv += ouARB0WbQL[yTbV2iy];
    }
    sUvOfVhD85KS = (float) WsE1Pv / ZlagSLbj;
    for (yTbV2iy = (563 - 563); ZlagSLbj > yTbV2iy; yTbV2iy = yTbV2iy + (941 - 940)) {
        if (ouARB0WbQL[yTbV2iy] > sUvOfVhD85KS)
            k1gqvu[yTbV2iy] = ouARB0WbQL[yTbV2iy] - sUvOfVhD85KS;
        else
            k1gqvu[yTbV2iy] = sUvOfVhD85KS - ouARB0WbQL[yTbV2iy];
    }
    for (yTbV2iy = (56 - 55); yTbV2iy < ZlagSLbj; yTbV2iy++) {
        for (UTrMGZnV = ZlagSLbj -(893 - 892); yTbV2iy <= UTrMGZnV; UTrMGZnV = UTrMGZnV -(57 - 56)) {
            if (k1gqvu[UTrMGZnV -(379 - 378)] > k1gqvu[UTrMGZnV]) {
                Vuq13U = k1gqvu[UTrMGZnV];
                k1gqvu[UTrMGZnV] = k1gqvu[UTrMGZnV -(946 - 945)];
                k1gqvu[UTrMGZnV -(517 - 516)] = Vuq13U;
                OWuUo5VbnfOa = ouARB0WbQL[UTrMGZnV];
                ouARB0WbQL[UTrMGZnV] = ouARB0WbQL[UTrMGZnV -(241 - 240)];
                ouARB0WbQL[UTrMGZnV -(876 - 875)] = OWuUo5VbnfOa;
            }
        }
    }
    if (k1gqvu[ZlagSLbj -(312 - 311)] == k1gqvu[ZlagSLbj -(594 - 592)]) {
        if (ouARB0WbQL[ZlagSLbj -(734 - 732)] > ouARB0WbQL[ZlagSLbj -(360 - 359)]) {
            OWuUo5VbnfOa = ouARB0WbQL[ZlagSLbj -(628 - 627)];
            ouARB0WbQL[ZlagSLbj -(642 - 641)] = ouARB0WbQL[ZlagSLbj -(872 - 870)];
            ouARB0WbQL[ZlagSLbj -(176 - 174)] = OWuUo5VbnfOa;
        }
        printf ("%d,%d", ouARB0WbQL[ZlagSLbj -(928 - 926)], ouARB0WbQL[ZlagSLbj -(761 - 760)]);
    }
    else
        printf ("%d", ouARB0WbQL[ZlagSLbj -1]);
    return 0;
}

