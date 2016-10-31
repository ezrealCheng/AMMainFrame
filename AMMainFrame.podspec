Pod::Spec.new do |s|

s.name         = "AMMainFrame"
s.version      = "0.0.1"
s.summary      = "AMMainFrame is myself first test object"

s.homepage     = "https://github.com/ezrealCheng/AMMainFrame"




s.license      = "MIT"


s.author             = { "程宜" => "ezreal_cheng@sina.com" }
s.source       = { :git => "https://github.com/ezrealCheng/AMMainFrame.git", :tag => "#{s.version}" }

s.platform = :ios

s.vendored_libraries = 'libAMMainFrame.a'

s.subspec 'AMMainFrame' do |ss|
ss.source_files = 'AMMainFrame/*.h'
ss.public_header_files = 'AMMainFrame/*.h'
end


end
