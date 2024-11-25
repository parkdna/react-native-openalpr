
Pod::Spec.new do |s|
  s.name         = "RNOpenAlpr"
  s.version      = "1.0.0"
  s.summary      = "RNOpenAlpr"
  s.description  = <<-DESC
                  RNOpenAlpr
                   DESC
  s.homepage     = ""
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "author" => "author@domain.cn" }
  s.platform     = :ios, "12.4"
  s.source       = { :git => "https://github.com/author/RNOpenAlpr.git", :tag => "master" }
  s.source_files  = "RNOpenAlpr/**/*.{h,m,mm}"
  s.requires_arc = true

end

  