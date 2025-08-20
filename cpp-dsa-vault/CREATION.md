### The creation command for the project structure: 

```
# Root project folder
$root = "cpp-dsa-vault"

# All folders
$folders = @(
  "$root/01_basics",
  "$root/02_control_flow",
  "$root/03_pointers_arrays_strings",
  "$root/04_oop",
  "$root/05_exceptions_files",
  "$root/06_stl",
  "$root/07_cp_basics",
  "$root/08_revision_problems/arrays",
  "$root/08_revision_problems/strings",
  "$root/08_revision_problems/linked_lists",
  "$root/08_revision_problems/graphs",
  "$root/08_revision_problems/hashing"
)

# All files
$files = @(
  "$root/01_basics/hello_world.cpp",
  "$root/01_basics/variables.cpp",
  "$root/01_basics/datatypes.cpp",
  "$root/01_basics/input_output.cpp",

  "$root/02_control_flow/operators.cpp",
  "$root/02_control_flow/if_else.cpp",
  "$root/02_control_flow/loops.cpp",
  "$root/02_control_flow/functions.cpp",

  "$root/03_pointers_arrays_strings/pointers.cpp",
  "$root/03_pointers_arrays_strings/arrays_intro.cpp",
  "$root/03_pointers_arrays_strings/string_basics.cpp",
  "$root/03_pointers_arrays_strings/string_problems.cpp",

  "$root/04_oop/structures.cpp",
  "$root/04_oop/dynamic_memory.cpp",
  "$root/04_oop/encapsulation.cpp",
  "$root/04_oop/abstraction.cpp",
  "$root/04_oop/inheritance.cpp",
  "$root/04_oop/polymorphism.cpp",
  "$root/04_oop/overloading.cpp",
  "$root/04_oop/virtual_functions.cpp",

  "$root/05_exceptions_files/exception_handling.cpp",
  "$root/05_exceptions_files/file_handling.cpp",

  "$root/06_stl/vector.cpp",
  "$root/06_stl/map.cpp",
  "$root/06_stl/set.cpp",
  "$root/06_stl/stack.cpp",
  "$root/06_stl/queue.cpp",
  "$root/06_stl/priority_queue.cpp",
  "$root/06_stl/pair.cpp",

  "$root/07_cp_basics/fast_io.cpp",
  "$root/07_cp_basics/macros.cpp",
  "$root/07_cp_basics/modular_arithmetic.cpp",
  "$root/07_cp_basics/binary_search_stl.cpp",

  "$root/08_revision_problems/arrays/reverse_array.cpp",
  "$root/08_revision_problems/arrays/rotate_array.cpp",
  "$root/08_revision_problems/arrays/max_subarray.cpp",

  "$root/08_revision_problems/strings/palindrome.cpp",
  "$root/08_revision_problems/strings/anagram.cpp",

  "$root/08_revision_problems/linked_lists/linkedlist_basics.cpp",
  "$root/08_revision_problems/linked_lists/reverse_linkedlist.cpp",

  "$root/08_revision_problems/graphs/bfs.cpp",
  "$root/08_revision_problems/graphs/dfs.cpp",
  "$root/08_revision_problems/graphs/shortest_path.cpp",

  "$root/08_revision_problems/hashing/frequency_counter.cpp",
  "$root/08_revision_problems/hashing/two_sum.cpp",

  "$root/README.md",
  "$root/.gitignore"
)

# Create folders
foreach ($f in $folders) {
    New-Item -ItemType Directory -Path $f -Force | Out-Null
}

# Create files
foreach ($f in $files) {
    New-Item -ItemType File -Path $f -Force | Out-Null
}

```