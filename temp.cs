

void readPacket(byte[] buffer) {
    p.BaseStream.Flush();
    lock(digitalIns) {
        for (int i = 0; i < digitalIns.Length; i++) {
            digitalIns[i] = (buffer[i / 8] & (1 << i)) != 0;
        }
    }
    lock(analogIns) {
        for (int i = 0; i < analogIns.Length; i++) {
            int index = i * 2 + (numDigitIn + 7) / 8;
            analogIns[i] = (ushort) ((buffer[index + 1] << 8) | buffer[index]);
        }
    }
}
