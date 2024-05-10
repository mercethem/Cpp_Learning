/** Taken from Howard Hinnant - Move functions information - 2014

 defaulted can mean "deleted" if the defaulted special members would have to do something illegal, such as call another
 deleted function.

 defaulted move members defined as deleted, actually behave as not declared.

 */
