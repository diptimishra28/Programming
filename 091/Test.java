class Test
{
    public static void main(String[] args)
    {
        Integer ref = func();
        System.out.print(ref);
    }

    static Integer func()
    {
        Integer ref1 = Integer.valueOf(10);
        return ref1;
    }
}
