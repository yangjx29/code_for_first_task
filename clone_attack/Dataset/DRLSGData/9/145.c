struct   P {
    char JvSMXG1Au4 [(422 - 412)];
    int kpu4ImKH5s3;
}
uL0lQ7 [(446 - 346)];
struct   P H9EWJY1Z [(986 - 886)];

int main () {
    int ZcsEQS, WcZYjw = (414 - 414), KB6c1IvEYZo = (346 - 346), Hjs5fUh4D, bs3bKqoU92tN, VkAEuwasKI, eyxOE5Tmk, eYnQ09HgUT;
    struct   P temp;
    scanf ("%d", &ZcsEQS);
    for (Hjs5fUh4D = (291 - 291); ZcsEQS > Hjs5fUh4D; Hjs5fUh4D++) {
        scanf ("%s%d", temp.JvSMXG1Au4, &(temp.kpu4ImKH5s3));
        if ((758 - 698) <= temp.kpu4ImKH5s3) {
            H9EWJY1Z[WcZYjw] = temp;
            WcZYjw++;
        }
        else {
            uL0lQ7[KB6c1IvEYZo] = temp;
            KB6c1IvEYZo++;
        }
    }
    for (bs3bKqoU92tN = (711 - 711); bs3bKqoU92tN < WcZYjw; bs3bKqoU92tN++) {
        for (VkAEuwasKI = (346 - 346); WcZYjw -bs3bKqoU92tN > VkAEuwasKI; VkAEuwasKI++) {
            if (H9EWJY1Z[VkAEuwasKI +(161 - 160)].kpu4ImKH5s3 > H9EWJY1Z[VkAEuwasKI].kpu4ImKH5s3) {
                struct   P jP1Z7ta8 = H9EWJY1Z[VkAEuwasKI];
                H9EWJY1Z[VkAEuwasKI] = H9EWJY1Z[VkAEuwasKI +(986 - 985)];
                H9EWJY1Z[VkAEuwasKI +(199 - 198)] = jP1Z7ta8;
            }
        }
    }
    for (eyxOE5Tmk = (305 - 305); eyxOE5Tmk < WcZYjw; eyxOE5Tmk++) {
        printf ("%s\n", H9EWJY1Z[eyxOE5Tmk].JvSMXG1Au4);
    }
    for (eYnQ09HgUT = (922 - 922); eYnQ09HgUT < KB6c1IvEYZo; eYnQ09HgUT++) {
        printf ("%s\n", uL0lQ7[eYnQ09HgUT].JvSMXG1Au4);
    }
    return (336 - 336);
}

