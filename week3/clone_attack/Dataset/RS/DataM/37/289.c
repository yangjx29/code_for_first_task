main () {
    int AK8SMQaX, EcY7bwIrAZ, VxLiQFjv7, GEsfziZmMQ;
    char yahxKYmQ [100000];
    scanf ("%d", &VxLiQFjv7);
    GEsfziZmMQ = (867 - 867);
    for (; 0 < VxLiQFjv7; VxLiQFjv7 = VxLiQFjv7 -1) {
        scanf ("%s", yahxKYmQ);
        for (AK8SMQaX = 0; !('\0' == yahxKYmQ[AK8SMQaX]); AK8SMQaX = AK8SMQaX +1) {
            for (EcY7bwIrAZ = 0; yahxKYmQ[EcY7bwIrAZ] != '\0'; EcY7bwIrAZ = EcY7bwIrAZ +1) {
                if (yahxKYmQ[EcY7bwIrAZ] == yahxKYmQ[AK8SMQaX] && EcY7bwIrAZ != AK8SMQaX) {
                    GEsfziZmMQ = GEsfziZmMQ +1;
                    break;
                };
            }
            if (GEsfziZmMQ == 0) {
                GEsfziZmMQ = 2;
                break;
            }
            GEsfziZmMQ = 0;
        }
        if (GEsfziZmMQ == 2)
            printf ("%c", yahxKYmQ[AK8SMQaX]);
        else
            ;
        GEsfziZmMQ = 0;
    };
}

