{
  description = "slock development shell";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";

  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs { inherit system; };
    in {
      devShells.${system}.default = pkgs.mkShell {
        # Compilers + build tools
        nativeBuildInputs = with pkgs; [
          gcc
          gnumake
          pkg-config
        ];

        # Libraries + headers
        buildInputs = with pkgs; [
          libx11
          libxext
          libxrandr
          libxcrypt
          libxinerama
          libxft
          imlib2
          libxcb
          xorg.libXrender
          xorg.xorgproto
          freetype
          fontconfig
        ];
      };
    };
}
