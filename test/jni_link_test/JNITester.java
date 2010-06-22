class JNITester {
    static {
        System.loadLibrary("jni_tester");
    }

    public native void callMe();

    public static void main(String[] args) {
        (new JNITester()).callMe();
    }
}
