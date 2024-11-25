int MR7qrLZ (int qbaw1vP);
int djt (int z2z56VJ3f, int h6bpR8s, int k2UgtTorh);

int MR7qrLZ (int qbaw1vP) {
    if ((qbaw1vP % (803 - 799) == (259 - 259) && qbaw1vP % (402 - 302) != (725 - 725)) || (qbaw1vP % (804 - 404) == (981 - 981))) {
        return (755 - 754);
    }
    return (408 - 408);
}

int djt (int z2z56VJ3f, int h6bpR8s, int k2UgtTorh) {
    int OVH4ipeFRdyt [] = {(20 - 20), (565 - 534), (201 - 173), (506 - 475), (734 - 704), (934 - 903), (346 - 316), (929 - 898), (498 - 467), (176 - 146), (434 - 403), (1024 - 994), (475 - 444)};
    int vmWVCR36;
    int i;
    vmWVCR36 = (302 - 302);
    {
        i = (134 - 133);
        while (i < h6bpR8s) {
            if (i == (182 - 180) && MR7qrLZ (z2z56VJ3f)) {
                vmWVCR36 += (513 - 484);
            }
            else {
                vmWVCR36 += OVH4ipeFRdyt[i];
            }
            i++;
        }
    }
    vmWVCR36 += k2UgtTorh;
    return vmWVCR36;
}

int main () {
    int i;
    int buzvQNG;
    int hLIgjqkXaY4;
    int vmWVCR36;
    int OVH4ipeFRdyt [] = {(958 - 958), (689 - 658), (122 - 94), (293 - 262), (417 - 387), (787 - 756), (401 - 371), (622 - 591), (904 - 873), (49 - 19), (403 - 372), (132 - 102), (678 - 647)};
    struct   ymd {
        int z2z56VJ3f, h6bpR8s, k2UgtTorh;
    }
    nqmfTW;
    struct   ymd {
        int z2z56VJ3f, h6bpR8s, k2UgtTorh;
    }
    khqW1sV;
    struct   ymd {
        int z2z56VJ3f, h6bpR8s, k2UgtTorh;
    }
    P4EC5g;
    vmWVCR36 = (93 - 93);
    hLIgjqkXaY4 = (369 - 369);
    buzvQNG = (359 - 359);
    scanf ("%d%d%d%d%d%d", &nqmfTW.z2z56VJ3f, &nqmfTW.h6bpR8s, &nqmfTW.k2UgtTorh, &khqW1sV.z2z56VJ3f, &khqW1sV.h6bpR8s, &khqW1sV.k2UgtTorh);
    if ((nqmfTW.z2z56VJ3f > khqW1sV.z2z56VJ3f) || (nqmfTW.z2z56VJ3f == khqW1sV.z2z56VJ3f && nqmfTW.h6bpR8s > khqW1sV.h6bpR8s) || (nqmfTW.z2z56VJ3f == khqW1sV.z2z56VJ3f && nqmfTW.h6bpR8s == khqW1sV.h6bpR8s && nqmfTW.k2UgtTorh > khqW1sV.k2UgtTorh)) {
        P4EC5g = nqmfTW;
        nqmfTW = khqW1sV;
        khqW1sV = P4EC5g;
    }
    hLIgjqkXaY4 = djt (nqmfTW.z2z56VJ3f, nqmfTW.h6bpR8s, nqmfTW.k2UgtTorh);
    buzvQNG = djt (khqW1sV.z2z56VJ3f, khqW1sV.h6bpR8s, khqW1sV.k2UgtTorh);
    if (nqmfTW.z2z56VJ3f == khqW1sV.z2z56VJ3f) {
        vmWVCR36 = buzvQNG - hLIgjqkXaY4;
    }
    else {
        if (MR7qrLZ (nqmfTW.z2z56VJ3f)) {
            hLIgjqkXaY4 = (415 - 49) - hLIgjqkXaY4;
        }
        else {
            hLIgjqkXaY4 = (759 - 394) - hLIgjqkXaY4;
        }
        {
            i = nqmfTW.z2z56VJ3f + (444 - 443);
            for (; i < khqW1sV.z2z56VJ3f;) {
                if (MR7qrLZ (i)) {
                    vmWVCR36 += (480 - 114);
                }
                else {
                    vmWVCR36 += (1061 - 696);
                }
                i++;
            }
        }
        vmWVCR36 += hLIgjqkXaY4 + buzvQNG;
    }
    printf ("%d", vmWVCR36);
    return (204 - 204);
}

