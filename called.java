// interface a{
//   void show();
// }
// interface b{
//   void show();
// }

// class called implements a,b
// {
//   @Override
//   public void show()
//   {
//     System.out.println("interface A and B");
//   }
//   public static void main(String[] args) {
//    called c=new called();
//    c.show();
//   }
// }

 interface a {
  void show();
}
 interface b {
  void show();
}
 class called implements a, b {
  @Override
  public void show() {
      System.out.println("interface A and B");
  }
  public static void main(String[] args) {
    System.out.println("interface A and B");
  }
}
